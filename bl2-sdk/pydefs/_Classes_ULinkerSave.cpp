#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULinkerSave()
{
    class_< ULinkerSave, bases< UObject >  , boost::noncopyable>("ULinkerSave", no_init)
        .def_readonly("UnknownData00", &ULinkerSave::UnknownData00)
        .def("StaticClass", &ULinkerSave::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}