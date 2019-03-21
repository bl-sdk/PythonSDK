#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetObject()
{
    class_< USeqAct_SetObject, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetObject", no_init)
        .def_readwrite("DefaultValue", &USeqAct_SetObject::DefaultValue)
        .def_readwrite("Value", &USeqAct_SetObject::Value)
        .def("StaticClass", &USeqAct_SetObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetObject::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}