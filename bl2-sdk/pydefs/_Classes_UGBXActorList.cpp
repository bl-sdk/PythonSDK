#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXActorList()
{
    class_< UGBXActorList, bases< UObject >  , boost::noncopyable>("UGBXActorList", no_init)
        .def_readwrite("ActorList", &UGBXActorList::ActorList)
        .def("StaticClass", &UGBXActorList::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveAndDeleteActorsOfClassFromLevel", &UGBXActorList::RemoveAndDeleteActorsOfClassFromLevel)
        .def("RemoveActorsOfClassFromLevel", &UGBXActorList::RemoveActorsOfClassFromLevel)
        .def("RemoveAndDeleteActorsFromLevel", &UGBXActorList::RemoveAndDeleteActorsFromLevel)
        .def("RemoveActorsFromLevel", &UGBXActorList::RemoveActorsFromLevel)
        .def("FindNextActorByLevel", &UGBXActorList::FindNextActorByLevel, return_value_policy< reference_existing_object >())
        .def("FindFirstActorByLevel", &UGBXActorList::FindFirstActorByLevel, return_value_policy< reference_existing_object >())
        .def("FindNextActorByClass", &UGBXActorList::FindNextActorByClass, return_value_policy< reference_existing_object >())
        .def("FindFirstActorByClass", &UGBXActorList::FindFirstActorByClass, return_value_policy< reference_existing_object >())
        .def("RemoveActor", &UGBXActorList::RemoveActor)
        .def("AddActor", &UGBXActorList::AddActor)
        .staticmethod("StaticClass")
  ;
}