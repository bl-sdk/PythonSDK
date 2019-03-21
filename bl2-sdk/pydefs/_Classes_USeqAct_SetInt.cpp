#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetInt()
{
    class_< USeqAct_SetInt, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetInt", no_init)
        .def_readwrite("Target", &USeqAct_SetInt::Target)
        .def_readwrite("Value", &USeqAct_SetInt::Value)
        .def("StaticClass", &USeqAct_SetInt::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetInt::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}