#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStruct()
{
    class_< UStruct, bases< UObject >  , boost::noncopyable>("UStruct", no_init)
        .def_readonly("UnknownData00", &UStruct::UnknownData00)
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readonly("UnknownData01", &UStruct::UnknownData01)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UStruct::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}