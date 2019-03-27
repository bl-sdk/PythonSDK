#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkeletalMeshSocket(py::module &m)
{
    py::class_< USkeletalMeshSocket,  UObject   >(m, "USkeletalMeshSocket")
		.def_static("StaticClass", &USkeletalMeshSocket::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SocketName", &USkeletalMeshSocket::SocketName)
        .def_readwrite("BoneName", &USkeletalMeshSocket::BoneName)
        .def_readwrite("RelativeLocation", &USkeletalMeshSocket::RelativeLocation)
        .def_readwrite("RelativeRotation", &USkeletalMeshSocket::RelativeRotation)
        .def_readwrite("RelativeScale", &USkeletalMeshSocket::RelativeScale)
          ;
}