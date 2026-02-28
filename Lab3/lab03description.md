Midpoint Circle Generation Algorithm

Using Midpoint circle generation algorithm which is a variant of Bresenham's line algorithm, write a C-
Program to generate pixel activation list for drawing a circle with a given centre of circle P(x, y) and a
radius r? 

Aim: To implement midpoint circle generation algorithm or bresenham’s circle algorithm for drawing a circle
of given center (x, y) and radius r.

Description:

Circles have the property of being highly symmetrical, which is handy when it comes to drawing
them on a display screen.

We know that there are 360 degrees in a circle. First we see that a circle is symmetrical about the
x axis, so only the first 180 degrees need to be calculated.

Next we see that it's also symmetrical about the y axis, so now we only need to calculate the first
90 degrees.

Finally we see that the circle is also symmetrical about the 45 degree diagonal axis, so we only
need to calculate the first 45 degrees.

 We only need to calculate the values on the border of the circle in the first octant. The other
values may be determined by symmetry.


Bresenham's circle algorithm calculates the locations of the pixels in the first 45 degrees. It assumes that
the circle is centered on the origin. So for every pixel (x, y) it calculates, we draw a pixel in each of the eight
octants of the circle. This is done till when the value of the y coordinate equals the x coordinate. The pixel
positions for determining symmetry are given in the below algorithm.

Assume that we have
just plotted point (xk, yk)

The next point is a
choice between (xk+1, yk)
and (xk+1, yk-1)

We would like to choose
the point that is nearest to
the actual circle

So we use decision
parameter here to decide.

Algorithm:
1. Input radius r and circle centre (xc, yc), then set the coordinates for the first point on the
circumference of a circle centred on the origin as:
( x0 ,y0)=(0 , r )

3. Calculate the initial value of the decision parameter as:
p0 =(5/4)-r

4. Starting with k = 0 at each position xk, perform the following test. If pk < 0, the next point
along the circle centred on (0, 0) is (xk+1, yk) and:
Pk+1 = pK + 2 xk+1 +1

Otherwise the next point along the circle is (xk+1, yk-1) and:
p k+1 = pk + 2xk+1 + 1 - 2 yk+1


5. Determine symmetry points in the other seven octants
  
7. Move each calculated pixel position (x, y) onto the circular path centred at (xc, yc) to plot the

coordinate values:
6. Repeat steps 3 to 5 until x >= y

x = x + xc 
y = y + yc
