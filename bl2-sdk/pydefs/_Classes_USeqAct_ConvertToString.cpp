#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ConvertToString()
{
    class_< USeqAct_ConvertToString, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ConvertToString", no_init)
        .def_readwrite("VarSeparator", &USeqAct_ConvertToString::VarSeparator)
        .def_readwrite("NumberOfInputs", &USeqAct_ConvertToString::NumberOfInputs)
        .def("StaticClass", &USeqAct_ConvertToString::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ConvertToString::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}