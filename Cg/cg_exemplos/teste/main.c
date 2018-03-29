#include <GL/glew.h>
#include <GL/freeglut.h>
#include <math.h>

void desenhaObjeto() {
        float a, x, y;
        int i;
        glBegin(GL_LINE_STRIP);
            for(i=0; i<=10000; i++){
                // Equações das coordenadas.
                a = (i*3.1415)/180;
                x = a * cos(a);
                y = a * sin(a);
                glVertex2f(x, y);
            }
        glEnd();
}

void desenhaCena(void)
{
    // Limpa a tela (com a cor definida por glClearColor(r,g,b)) para que
    // possamos desenhar
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(0, 0, 0);
    desenhaObjeto();
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
   glOrtho(-100, 100, -100, 100, -2, 2);
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
