#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXActorList()
{
    py::class_< UGBXActorList,  UObject   >("UGBXActorList")
        .def_readwrite("ActorList", &UGBXActorList::ActorList)
        .def("StaticClass", &UGBXActorList::StaticClass, py::return_value_policy::reference)
        .def("RemoveAndDeleteActorsOfClassFromLevel", &UGBXActorList::RemoveAndDeleteActorsOfClassFromLevel)
        .def("RemoveActorsOfClassFromLevel", &UGBXActorList::RemoveActorsOfClassFromLevel)
        .def("RemoveAndDeleteActorsFromLevel", &UGBXActorList::RemoveAndDeleteActorsFromLevel)
        .def("RemoveActorsFromLevel", &UGBXActorList::RemoveActorsFromLevel)
        .def("FindNextActorByLevel", &UGBXActorList::FindNextActorByLevel, py::return_value_policy::reference)
        .def("FindFirstActorByLevel", &UGBXActorList::FindFirstActorByLevel, py::return_value_policy::reference)
        .def("FindNextActorByClass", &UGBXActorList::FindNextActorByClass, py::return_value_policy::reference)
        .def("FindFirstActorByClass", &UGBXActorList::FindFirstActorByClass, py::return_value_policy::reference)
        .def("RemoveActor", &UGBXActorList::RemoveActor)
        .def("AddActor", &UGBXActorList::AddActor)
        .staticmethod("StaticClass")
  ;
}