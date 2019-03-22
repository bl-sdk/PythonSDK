#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorMATSpawnable(py::module &m)
{
    py::class_< ASkeletalMeshActorMATSpawnable,  ASkeletalMeshActorMAT   >(m, "ASkeletalMeshActorMATSpawnable")
          ;
}