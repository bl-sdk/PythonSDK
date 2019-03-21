#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkeletalMeshSocket()
{
    class_< USkeletalMeshSocket, bases< UObject >  , boost::noncopyable>("USkeletalMeshSocket", no_init)
        .def_readwrite("SocketName", &USkeletalMeshSocket::SocketName)
        .def_readwrite("BoneName", &USkeletalMeshSocket::BoneName)
        .def_readwrite("RelativeLocation", &USkeletalMeshSocket::RelativeLocation)
        .def_readwrite("RelativeRotation", &USkeletalMeshSocket::RelativeRotation)
        .def_readwrite("RelativeScale", &USkeletalMeshSocket::RelativeScale)
        .def("StaticClass", &USkeletalMeshSocket::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}