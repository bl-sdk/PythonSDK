#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBookMark()
{
    class_< UBookMark, bases< UObject >  , boost::noncopyable>("UBookMark", no_init)
        .def_readwrite("Location", &UBookMark::Location)
        .def_readwrite("Rotation", &UBookMark::Rotation)
        .def_readwrite("HiddenLevels", &UBookMark::HiddenLevels)
        .def("StaticClass", &UBookMark::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}