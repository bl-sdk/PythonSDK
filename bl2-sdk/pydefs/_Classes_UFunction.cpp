#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFunction()
{
    class_< UFunction, bases< UStruct >  , boost::noncopyable>("UFunction", no_init)
        .def_readwrite("iNative", &UFunction::iNative)
        .def_readwrite("RepOffset", &UFunction::RepOffset)
        .def_readwrite("FriendlyName", &UFunction::FriendlyName)
        .def_readwrite("NumParms", &UFunction::NumParms)
        .def_readwrite("ParmsSize", &UFunction::ParmsSize)
        .def_readonly("UnknownData00", &UFunction::UnknownData00)
        .def_readwrite("Func", &UFunction::Func)
        .def("StaticClass", &UFunction::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}