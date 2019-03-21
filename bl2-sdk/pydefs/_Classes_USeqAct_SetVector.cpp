#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetVector()
{
    class_< USeqAct_SetVector, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetVector", no_init)
        .def_readwrite("DefaultValue", &USeqAct_SetVector::DefaultValue)
        .def("StaticClass", &USeqAct_SetVector::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_SetVector::eventActivated)
        .staticmethod("StaticClass")
  ;
}