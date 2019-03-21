#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Union()
{
    class_< USeqVar_Union, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Union", no_init)
        .def("StaticClass", &USeqVar_Union::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}