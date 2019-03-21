#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareBool()
{
    class_< USeqCond_CompareBool, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareBool", no_init)
        .def("StaticClass", &USeqCond_CompareBool::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqCond_CompareBool::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}