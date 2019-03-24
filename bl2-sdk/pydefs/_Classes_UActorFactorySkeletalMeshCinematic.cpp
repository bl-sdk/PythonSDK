#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshCinematic(py::module &m)
{
    py::class_< UActorFactorySkeletalMeshCinematic,  UActorFactorySkeletalMesh   >(m, "UActorFactorySkeletalMeshCinematic")
		.def_static("StaticClass", &UActorFactorySkeletalMeshCinematic::StaticClass, py::return_value_policy::reference)
          ;
}