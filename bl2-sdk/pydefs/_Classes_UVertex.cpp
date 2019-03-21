#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVertex()
{
    class_< UVertex, bases< UObject >  , boost::noncopyable>("UVertex", no_init)
        .def_readwrite("ParentLine", &UVertex::ParentLine)
        .def_readwrite("Position", &UVertex::Position)
        .def_readwrite("Material", &UVertex::Material)
        .def_readwrite("Material_Selected", &UVertex::Material_Selected)
        .def_readwrite("cColor", &UVertex::cColor)
        .def("StaticClass", &UVertex::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}