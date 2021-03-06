
/* Class object interface */

/* Revealing some structures (not for general use) */

#ifndef Py_CLASSOBJECT_H
#define Py_CLASSOBJECT_H

typedef struct {
	PyObject_HEAD
	PyObject *im_func;   /* The callable object implementing the method */
	PyObject *im_self;   /* The instance it is bound to, or NULL */
	PyObject *im_class;  /* The class that asked for the method */
	PyObject *im_weakreflist; /* List of weak references */
} PyMethodObject;

PyAPI_DATA(PyTypeObject) PyMethod_Type;

#define PyMethod_Check(op) ((op)->ob_type == &PyMethod_Type)

/* Macros for direct access to these values. Type checks are *not*
   done, so use with care. */
#define PyMethod_GET_FUNCTION(meth) \
        (((PyMethodObject *)meth) -> im_func)
#define PyMethod_GET_SELF(meth) \
	(((PyMethodObject *)meth) -> im_self)

#endif /* !Py_CLASSOBJECT_H */
