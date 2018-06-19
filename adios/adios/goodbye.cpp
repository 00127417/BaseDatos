#include <iostream>
#include <cstdlib>
#include <SDL2/SDL.h>

using namespace std;

class Ventana
{
private:
    SDL_Window *window;
    SDL_Surface *windowSurface;
public:
    Ventana();
    void IniciarVentana();
    void ColocarImagen(int , int , SDL_Surface *);
};

Ventana::Ventana()
{
    this->window=nullptr;
    this->windowSurface=nullptr;

    SDL_Init(SDL_INIT_VIDEO); // inciamos la interfaz grafica

}

void Ventana::IniciarVentana()
{
    int antx=0, anty=0,f=1;
    SDL_Surface *image1=nullptr, *image2=nullptr;


    bool isRunning =true; // con esta bandera indicaremos que el programa esta correindo
    SDL_Event ev; //variable que tendra los eventos
    /*Creando la ventana*/
    this->window=SDL_CreateWindow("Hola Mundo",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
    this->windowSurface = SDL_GetWindowSurface(this->window);
    /*Cragando las imagenes*/
    image1=SDL_LoadBMP("cuadro.bmp");
    image2=SDL_LoadBMP("borrar.bmp");
    /*Luego para que este activa crearemos un eveno para configurar
     el boton salir*/

    while(isRunning) // si esta en true continuara el juego
    {
        /*if(flag)
        {
            for(int i=0; i<12 ; i++)
            {
                //cout << i << endl;
                Ventana::ColocarImagen(i*50,0,image1);
            }
            flag=false;
        }
        */
        while(SDL_PollEvent(&ev) != 0) //escuchamos los diferentes eventos que se producen
        {
            if(ev.type == SDL_QUIT) // si el usuario da clic en boton salir de la venana
            {
                isRunning=false; // colocamos false para salir del while y terminar el juego
            }

            else if(ev.type == SDL_MOUSEBUTTONDOWN)
            {
                if(ev.button.button == SDL_BUTTON_LEFT)
                {

                    cout << "x: " << ev.button.x << endl;
                    cout << "y: " << ev.button.y << endl;
                    if(f==1)
                    {
                        Ventana::ColocarImagen(ev.button.x, ev.button.y, image1);
                        antx=ev.button.x;
                        anty=ev.button.y;
                        f=0;
                    }
                    else
                    {
                        Ventana::ColocarImagen(ev.button.x, ev.button.y, image1);
                        Ventana::ColocarImagen(antx, anty, image2);
                        antx=ev.button.x;
                        anty=ev.button.y;
                    }


                }
            }

        }

        //SDL_BlitSurface(currentImage,NULL,windowSurface,NULL);
        SDL_UpdateWindowSurface(this->window); // refresacmos la ventana
    }

   SDL_FreeSurface(image1);
    SDL_FreeSurface(image2);

    SDL_DestroyWindow(this->window); // destruimos la ventana
   image1 = image2 = nullptr;
    this->window=nullptr;
    SDL_Quit(); // salimos de sdl
}

void Ventana::ColocarImagen(int x, int y, SDL_Surface *image)
{
    SDL_Rect destination;
    destination.x=x;
    destination.y=y;
    SDL_BlitSurface(image,NULL,this->windowSurface,&destination);
    //SDL_Flip(this->windowSurface);
    //SDL_UpdateWindowSurface(this->window);
}

int main(int argc, char** argv) {
    Ventana v; // creamos nuestro objeto ventana
    v.IniciarVentana(); // e iiciamos nuestra interfaz
    return 0;
}
