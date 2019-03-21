#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBookMark2D()
{
    class_< UBookMark2D, bases< UObject >  , boost::noncopyable>("UBookMark2D", no_init)
        .def_readwrite("Zoom2D", &UBookMark2D::Zoom2D)
        .def_readwrite("Location", &UBookMark2D::Location)
        .def("StaticClass", &UBookMark2D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}