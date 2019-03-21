#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Float()
{
    class_< USeqVar_Float, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Float", no_init)
        .def_readwrite("FloatValue", &USeqVar_Float::FloatValue)
        .def("StaticClass", &USeqVar_Float::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}