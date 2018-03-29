#include <GL/glew.h>
#include <GL/freeglut.h>

void DesenhaObjeto() {
    glBegin(GL_TRIANGLES);
        glVertex2f(-1, 1);
        glVertex2f(1, -1);
        glVertex2f(0, 0.7f);
    glEnd();
}

void desenhaCena(void)
{
    // Limpa a tela (com a cor definida por glClearColor(r,g,b)) para que
    // possamos desenhar
    glClear(GL_COLOR_BUFFER_BIT);

    // Carrega a matriz identidade.
    glLoadIdentity();

    // Começa a usar a cor preta.
    glColor3f(0, 0, 0);

    // Fazendo a escala.
    glScalef(4, 4, 4);

    // Desenhando o obj.
    DesenhaObjeto();

    // Fazendo a escala.
    glScalef(.25f, .25f, .25f);

    // Mundando a cor para branco.
    glColor3f(1, 1, 1);

    // Desenhando o obj, outra vez.
    DesenhaObjeto();

    // Diz ao OpenGL para colocar o que desenhamos na tela
    glFlush();
}

// Inicia algumas variáveis de estado
void inicializa(void)
{
    // cor para limpar a tela
    glClearColor(1, 1, 1, 0);      // branco
}

// Callback de redimensionamento
void redimensiona(int w, int h)
{
   glViewport(0, 0, w, h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0, 100, 0, 100, -1, 1);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

// Callback de evento de teclado
void teclado(unsigned char key, int x, int y)
{
   switch(key)
   {
      // Tecla ESC
      case 27:
         exit(0);
         break;
      default:
         break;
   }
}

// Rotina principal
int main(int argc, char **argv)
{
    // Acordando o GLUT
    glutInit(&argc, argv);

    // Definindo a versão do OpenGL que vamos usar
    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

    // Configuração inicial da janela do GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);

    // Abre a janela
    glutCreateWindow("Quadrado");

    // Registra callbacks para alguns eventos
    glutDisplayFunc(desenhaCena);
    glutReshapeFunc(redimensiona);
    glutKeyboardFunc(teclado);
    inicializa();

    // Entra em loop e nunca sai
    glutMainLoop();
    return 0;
}
