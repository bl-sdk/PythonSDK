#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_Handle(py::module &m)
{
    py::class_< URB_Handle,  UActorComponent   >(m, "URB_Handle")
        .def_readwrite("GrabbedComponent", &URB_Handle::GrabbedComponent)
        .def_readwrite("GrabbedBoneName", &URB_Handle::GrabbedBoneName)
        .def_readwrite("SceneIndex", &URB_Handle::SceneIndex)
        .def_readwrite("HandleData", &URB_Handle::HandleData)
        .def_readwrite("KinActorData", &URB_Handle::KinActorData)
        .def_readwrite("LinearDamping", &URB_Handle::LinearDamping)
        .def_readwrite("LinearStiffness", &URB_Handle::LinearStiffness)
        .def_readwrite("LinearStiffnessScale3D", &URB_Handle::LinearStiffnessScale3D)
        .def_readwrite("LinearDampingScale3D", &URB_Handle::LinearDampingScale3D)
        .def_readwrite("AngularDamping", &URB_Handle::AngularDamping)
        .def_readwrite("AngularStiffness", &URB_Handle::AngularStiffness)
        .def_readwrite("Destination", &URB_Handle::Destination)
        .def_readwrite("StepSize", &URB_Handle::StepSize)
        .def_readwrite("Location", &URB_Handle::Location)
        .def("StaticClass", &URB_Handle::StaticClass, py::return_value_policy::reference)
        .def("GetOrientation", &URB_Handle::GetOrientation)
        .def("SetOrientation", &URB_Handle::SetOrientation)
        .def("UpdateSmoothLocation", &URB_Handle::UpdateSmoothLocation)
        .def("SetSmoothLocation", &URB_Handle::SetSmoothLocation)
        .def("SetLocation", &URB_Handle::SetLocation)
        .def("ReleaseComponent", &URB_Handle::ReleaseComponent)
        .def("GrabComponent", &URB_Handle::GrabComponent)
          ;
}