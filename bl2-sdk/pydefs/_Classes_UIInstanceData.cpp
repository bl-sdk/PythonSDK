#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIInstanceData()
{
    class_< UIInstanceData, bases< UInterface >  , boost::noncopyable>("UIInstanceData", no_init)
        .def("StaticClass", &UIInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetReplicatedInstanceDataState", &UIInstanceData::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &UIInstanceData::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &UIInstanceData::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &UIInstanceData::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &UIInstanceData::eventRemoveInstanceData)
        .def("eventGetInstanceData", &UIInstanceData::eventGetInstanceData)
        .def("SetInstanceData", &UIInstanceData::SetInstanceData)
        .staticmethod("StaticClass")
  ;
}