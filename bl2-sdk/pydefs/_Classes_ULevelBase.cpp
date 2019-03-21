#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelBase()
{
    class_< ULevelBase, bases< UObject >  , boost::noncopyable>("ULevelBase", no_init)
        .def_readonly("UnknownData00", &ULevelBase::UnknownData00)
        .def("StaticClass", &ULevelBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}