#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Int()
{
    class_< USeqVar_Int, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Int", no_init)
        .def_readwrite("IntValue", &USeqVar_Int::IntValue)
        .def("StaticClass", &USeqVar_Int::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}