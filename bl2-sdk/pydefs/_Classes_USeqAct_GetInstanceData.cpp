#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetInstanceData()
{
    class_< USeqAct_GetInstanceData, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetInstanceData", no_init)
        .def_readwrite("InstanceDataName", &USeqAct_GetInstanceData::InstanceDataName)
        .def_readwrite("InObject", &USeqAct_GetInstanceData::InObject)
        .def_readwrite("OutObject", &USeqAct_GetInstanceData::OutObject)
        .def("StaticClass", &USeqAct_GetInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_GetInstanceData::eventActivated)
        .staticmethod("StaticClass")
  ;
}