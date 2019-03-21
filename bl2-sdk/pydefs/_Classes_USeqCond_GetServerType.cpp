#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_GetServerType()
{
    class_< USeqCond_GetServerType, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_GetServerType", no_init)
        .def("StaticClass", &USeqCond_GetServerType::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqCond_GetServerType::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}