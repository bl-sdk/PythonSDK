#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetableList()
{
    class_< UTargetableList, bases< UObject >  , boost::noncopyable>("UTargetableList", no_init)
        .def_readwrite("TargetableAllegianceMap", &UTargetableList::TargetableAllegianceMap)
        .def_readwrite("FullTargetableList", &UTargetableList::FullTargetableList)
        .def("StaticClass", &UTargetableList::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDebugInfo", &UTargetableList::GetDebugInfo)
        .def("ResetAllegiance", &UTargetableList::ResetAllegiance)
        .def("GetNext", &UTargetableList::GetNext, return_value_policy< reference_existing_object >())
        .def("StartSearch", &UTargetableList::StartSearch, return_value_policy< reference_existing_object >())
        .def("UnRegisterTargetable", &UTargetableList::UnRegisterTargetable)
        .def("RegisterTargetable", &UTargetableList::RegisterTargetable)
        .staticmethod("StaticClass")
  ;
}