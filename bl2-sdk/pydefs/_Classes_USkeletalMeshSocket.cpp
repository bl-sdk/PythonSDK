#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkeletalMeshSocket()
{
    py::class_< USkeletalMeshSocket,  UObject   >("USkeletalMeshSocket")
        .def_readwrite("SocketName", &USkeletalMeshSocket::SocketName)
        .def_readwrite("BoneName", &USkeletalMeshSocket::BoneName)
        .def_readwrite("RelativeLocation", &USkeletalMeshSocket::RelativeLocation)
        .def_readwrite("RelativeRotation", &USkeletalMeshSocket::RelativeRotation)
        .def_readwrite("RelativeScale", &USkeletalMeshSocket::RelativeScale)
        .def("StaticClass", &USkeletalMeshSocket::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}