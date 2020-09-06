## Refs: https://plot.ly/python/tree-plots/
## Deps: plotly, python-igraph, retrying, six

import igraph
import plotly.graph_objects as go
from igraph import Graph, EdgeSeq

nr_vertices = 7 # Número de vértices
v_label = list(map(str, range(nr_vertices))) # Nome de cada vértice
# Temos um erro de criação na linha abaixo.
G = Graph.Tree(nr_vertices, 3) # Número de filhos de um vértice. Podemos colocar um número máximo e não usar.
lay = G.layout_reingold_tilford(mode="in", root=[0])

position = {k: lay[k] for k in range(nr_vertices)}
Y = [lay[k][1] for k in range(nr_vertices)]
M = max(Y)

# Apagando as arestas criadas por padrão.
E = [e.tuple for e in G.es] # Criando uma lista com as arestas
G.delete_edges(E) # Apagando as arestas
G.add_edges([(1, 0), (2, 0), (3, 0), (4, 1), (5, 1), (6, 2)]) # Sequência de vértices.
es = EdgeSeq(G) # Sequence of edges
E = [e.tuple for e in G.es] # List of edges

L = len(position)
Xn = [position[k][0] for k in range(L)]
Yn = [2*M-position[k][1] for k in range(L)]
Xe = []
Ye = []
for edge in E:
    Xe+=[position[edge[0]][0], position[edge[1]][0], None]
    Ye+=[2*M-position[edge[0]][1], 2*M-position[edge[1]][1], None]

labels = ['com','cefetmg','ufmg','pucmg', 'decom', 'df', 'icex']

# Código para plotar a árvore
fig = go.Figure()
fig.add_trace(go.Scatter(x=Xe, 
                         y=Ye, 
                         mode='lines', 
                         line=dict(color = 'rgb(210,210,210)', 
                         width=1),
                         hoverinfo='none'
                         ))
fig.add_trace(go.Scatter(x=Xn,
                         y=Yn,
                         mode='markers',
                         name='bla',
                         marker=dict(symbol='square',
                                     size=40,
                                     color='#6175c1',
                                     line=dict(color='rgb(50,50,50)', width=1)
                                     ),
                         text=labels,
                         hoverinfo='text',
                         opacity=0.8
                         ))

def make_anotations(pos, text, font_size=10, font_color='rgb(250,250,250)'):
    L = len(pos)
    if len(pos) != L :
        raise ValueError('The lists pos and text must have the same len')
    annotations = []
    for k in range(L):
        annotations.append(
            dict(
                text=labels[k],
                x=pos[k][0],
                y=2*M-position[k][1],
                xref='x1',
                yref='y1',
                font=dict(
                    color=font_color,
                    size=font_size
                ),
                showarrow=False
            )
        )
    return annotations

axis = dict(
    showline=False,
    zeroline=False,
    showgrid=False,
    showticklabels=False
)

fig.update_layout(
    title='Teste de arvore DNS',
    annotations=make_anotations(position, v_label),
    font_size=12,
    showlegend=False,
    xaxis=axis,
    yaxis=axis,
    margin=dict(
        l=40,
        r=40,
        b=85,
        t=100
    ),
    hovermode='closest',
    plot_bgcolor='rgb(248,248,248)'
)
fig.show()