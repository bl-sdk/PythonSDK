#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UState()
{
    class_< UState, bases< UObject >  , boost::noncopyable>("UState", no_init)
        .def_readonly("UnknownData00", &UState::UnknownData00)
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readonly("UnknownData01", &UStruct::UnknownData01)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}