#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UConst()
{
    class_< UConst, bases< UField >  , boost::noncopyable>("UConst", no_init)
        .def_readonly("UnknownData00", &UConst::UnknownData00)
        .def("StaticClass", &UConst::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}