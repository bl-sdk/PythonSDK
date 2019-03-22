#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APortalVolume(py::module &m)
{
    py::class_< APortalVolume,  AActor   >(m, "APortalVolume")
        .def_readwrite("Portals", &APortalVolume::Portals)
        .def_readwrite("AssociatedActors", &AVolume::AssociatedActors)
        .def_readwrite("CsgOper", &ABrush::CsgOper)
        .def_readwrite("BrushColor", &ABrush::BrushColor)
        .def_readwrite("PolyFlags", &ABrush::PolyFlags)
        .def_readwrite("Brush", &ABrush::Brush)
        .def_readwrite("BrushComponent", &ABrush::BrushComponent)
        .def_readwrite("SavedSelections", &ABrush::SavedSelections)
        .def("eventProcessActorSetVolume", &AVolume::eventProcessActorSetVolume)
        .def("eventCollisionChanged", &AVolume::eventCollisionChanged)
        .def("OnToggle", &AVolume::OnToggle)
        .def("eventSetInitialState", &AVolume::eventSetInitialState)
        .def("eventPostBeginPlay", &AVolume::eventPostBeginPlay)
        .def("AssociateActor", &AVolume::AssociateActor)
        .def("EncompassesPoint", &AVolume::EncompassesPoint)
        .def("Encompasses", &AVolume::Encompasses)
          ;
}