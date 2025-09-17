#ifndef DRAWABLE_H
#define DRAWABLE_H

class Drawable {
    public:
    virtual void draw() const = 0; // promises a drawing behaviour but no implement
    virtual ~Drawable(){};
};

#endif