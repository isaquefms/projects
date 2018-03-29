/*
 *  demo_cube.c
 *  Este programa demonstra a construcao de um cubo com uso de glVertex
 * 
 *  author: Ting (8/08/06)
 */

#include <GL/glut.h>
#include <stdlib.h>

#define v .577350269

static GLfloat vdata[8][3] = {
   {-1.0, -1.0, -1.0}, {1.0, -1.0, -1.0}, {1.0, 1.0, -1.0}, {-1.0, 1.0, -1.0},
   {-1.0, -1.0, 1.0}, {1.0, -1.0, 1.0}, {1.0, 1.0, 1.0}, {-1.0, 1.0, 1.0}
   };

static GLfloat ndata[8][3] = {
   {-v, -v, -v}, {v, -v, -v}, {v,v,-v}, {-v, v, -v}, 
   {-v, -v, v}, {v, -v, v}, {v,v,v}, {-v, v, v} 
   };

static GLuint vindices[6][4] = {
   {0,3,2,1}, {2,3,7,6}, {0,4,7,3},
   {1,2,6,5}, {4,5,6,7}, {0,1,5,4}
   };

static GLfloat m[4][4] = {
   {1.0,0.0,0.0,0.0}, {0.0,1.0,0.0,0.0}, {0.0,0.0,1.0,0.0}, {0.0,0.0,0.0,1.0}
   };

void init(void) 
{
   /* definir a cor em preto (0,0,0) como cor de "CLEAR" */
   glClearColor (0.0, 0.0, 0.0, 0.0);
   /* setar o tipo de tonalizacao. Ha duas alternativas
      GL_FLAT (constante) e GL_SMOOTH (interpolacao linear
      entre os vertices) */
   glShadeModel (GL_SMOOTH);
   /* setar o tamanho do ponto em pixels */
   glPointSize(5.0);
   /* setar a largura da linha em pixels */
   glLineWidth(3.0);
   /* setar o modo de renderizacao das faces. Ha tres alternativas:
      GL_POINT (somente vertices), GL_LINE (somente linhas) e GL_FILL
      (faces preenchidas) */
   glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
   /* setar a convencao de orientacao. Ha duas alternativas: GL_CCW (anti-horario)      e GL_CW (horario) */
   glFrontFace (GL_CCW);
   /* Habilitar face culling */
   glEnable (GL_CULL_FACE);
   /* definir as faces a serem discardadas. Ha tres alternativas: GL_FRONT,
      GL_BACK e GL_FRONT_AND_BACK */
   glCullFace (GL_FRONT);
}

void display(void)
{
   int i;

   /* "CLEAR" o display */
   glClear (GL_COLOR_BUFFER_BIT);
   /* setar a cor de desenho em branco (1,1,1) */
   glColor3f (1.0, 1.0, 1.0);
   /* carregar a matriz de identidade na pilha de matriz de transformacao */
   glLoadIdentity();
   /* empilhar a matriz de transformacao de camera  */
   gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
   /* definir matriz de transformacao */
   m[0][0] = 1.0; m[1][0] = 0.0;  m[2][0] = 0.0;  m[3][0] = 0.0;
   m[0][1] = 0.0; m[1][1] = 1.0;  m[2][1] = 0.0;  m[3][1] = 0.0;
   m[0][2] = 0.0; m[1][2] = 0.0;  m[2][2] = 1.0;  m[3][2] = 0.0;
   m[0][3] = 0.0; m[1][3] = 0.0;  m[2][3] = 0.0;  m[3][3] = 1.0;
   /* concatenar a matriz com a do topo da pilha */
   glMultMatrixf(&m[0][0]);

   /* concatenar a matriz de translacao com a do topo da pilha */
   //glTranslatef(0.5,0.5,0.5);
   
   /* concatenar a matriz de rotacao com a do topo da pilha */
   //glRotatef(30.,1.0,0.0,0.0);
  
   /* concatenar a matriz de mudanca de escala com a do topo da pilha */
   //glScalef(0.5,0.5,0.5);

   /* desenhar o cubo */
   for (i=0; i<6; i++) {
     glBegin(GL_POLYGON);
     glColor3f (1.0, 0.0, 0.0);
     glNormal3fv(&ndata[vindices[i][0]][0]);
     glVertex3fv(&vdata[vindices[i][0]][0]);
     glColor3f (0.0, 1.0, 0.0);
     glNormal3fv(&ndata[vindices[i][1]][0]);
     glVertex3fv(&vdata[vindices[i][1]][0]);
     glColor3f (0.0, 0.0, 1.0);
     glNormal3fv(&ndata[vindices[i][2]][0]);
     glVertex3fv(&vdata[vindices[i][2]][0]);
     glColor3f (0.0, 1.0, 1.0);
     glNormal3fv(&ndata[vindices[i][3]][0]);
     glVertex3fv(&vdata[vindices[i][3]][0]);
     glEnd();
   } 
   //glutWireCube (2.0);
   /* forcar a execucao dos comandos enviados a OpenGL */
   glFlush ();
}

void reshape (int w, int h)
{
   /* definir o tamanha de janela no display, em pixels */
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   /* chavear para a pilha de transformacao de projecao */ 
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
   /* chavear para a pilha de transformacao de modelo */
   glMatrixMode (GL_MODELVIEW);
}

/* ARGSUSED1 */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 'x':
	printf("apertou a tecla x\n");
        break;
      case 27:
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
   /* estabelecimento de comunicacao com o sistema de janela */
   glutInit(&argc, argv);
   /* setar o " visual" do display */
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   /* definir a janela */
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   /* inicializar openGL */
   init ();
   /* registrar os tratadores de eventos */
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   /* entre no modo de espera */
   glutMainLoop();
   return 0;
}
