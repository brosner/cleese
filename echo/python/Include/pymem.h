#ifndef Py_PYMEM_H
#define Py_PYMEM_H

#define PyMem_MALLOC(n)     malloc((n) ? (n) : 1)

#define PyMem_NEW(type, n) ( (type *) PyMem_MALLOC((n) * sizeof(type)) )

#define PyMem_FREE(op) /* Nothing */

#endif /* !Py_PYMEM_H */
