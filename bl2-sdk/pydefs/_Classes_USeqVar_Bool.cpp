#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Bool()
{
    class_< USeqVar_Bool, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Bool", no_init)
        .def_readwrite("bValue", &USeqVar_Bool::bValue)
        .def("StaticClass", &USeqVar_Bool::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}