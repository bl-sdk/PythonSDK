#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetAttributeValue()
{
    class_< USeqAct_GetAttributeValue, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetAttributeValue", no_init)
        .def_readwrite("AttributeDef", &USeqAct_GetAttributeValue::AttributeDef)
        .def_readwrite("ResultValue", &USeqAct_GetAttributeValue::ResultValue)
        .def("StaticClass", &USeqAct_GetAttributeValue::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}