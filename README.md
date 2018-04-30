![opengl](https://upload.wikimedia.org/wikipedia/en/thumb/f/fb/OpenGL_logo_%28Nov14%29.svg/640px-OpenGL_logo_%28Nov14%29.svg.png)

# Učimo OpenGL

Učimo [OpenGL](https://www.opengl.org) (Open Graphics Library) po primerima sa njihove zvanične stranice:

https://www.opengl.org/archives/resources/code/samples/glut_examples/examples/examples.html

## Pokretanje

Potrebno je prvo instalirati OpenGL biblioteku, te dodati opcije prevodiocu prilikom prevođenja fajlova:

```
gcc ime-fajla.c -lGL -lGLU -lglut
```

ili 

```
gcc ime-fajla.c -o ime-fajla -lGL -lGLU -lglut
```

Nakon toga pokrenuti izgrađeni izlazni fajl:

```
./ime-fajla
```
