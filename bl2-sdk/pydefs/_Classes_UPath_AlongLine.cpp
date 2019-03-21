#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_AlongLine()
{
    class_< UPath_AlongLine, bases< UPathConstraint >  , boost::noncopyable>("UPath_AlongLine", no_init)
        .def_readwrite("Direction", &UPath_AlongLine::Direction)
        .def("StaticClass", &UPath_AlongLine::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_AlongLine::Recycle)
        .def("AlongLine", &UPath_AlongLine::AlongLine)
        .staticmethod("StaticClass")
  ;
}