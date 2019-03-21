#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULinker()
{
    class_< ULinker, bases< UObject >  , boost::noncopyable>("ULinker", no_init)
        .def_readonly("UnknownData00", &ULinker::UnknownData00)
        .def("StaticClass", &ULinker::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}