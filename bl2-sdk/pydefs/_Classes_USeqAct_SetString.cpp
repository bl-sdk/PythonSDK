#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetString()
{
    class_< USeqAct_SetString, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetString", no_init)
        .def_readwrite("Target", &USeqAct_SetString::Target)
        .def_readwrite("Value", &USeqAct_SetString::Value)
        .def("StaticClass", &USeqAct_SetString::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetString::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}