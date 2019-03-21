#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABrushShape()
{
    class_< ABrushShape, bases< ABrush >  , boost::noncopyable>("ABrushShape", no_init)
        .def("StaticClass", &ABrushShape::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}