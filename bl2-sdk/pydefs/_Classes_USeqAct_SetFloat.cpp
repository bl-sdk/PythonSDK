#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetFloat()
{
    class_< USeqAct_SetFloat, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetFloat", no_init)
        .def_readwrite("Target", &USeqAct_SetFloat::Target)
        .def_readwrite("Value", &USeqAct_SetFloat::Value)
        .def("StaticClass", &USeqAct_SetFloat::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetFloat::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}