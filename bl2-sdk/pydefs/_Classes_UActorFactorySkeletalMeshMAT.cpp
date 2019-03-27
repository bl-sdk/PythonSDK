#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshMAT(py::module &m)
{
    py::class_< UActorFactorySkeletalMeshMAT,  UActorFactorySkeletalMesh   >(m, "UActorFactorySkeletalMeshMAT")
		.def_static("StaticClass", &UActorFactorySkeletalMeshMAT::StaticClass, py::return_value_policy::reference)
          ;
}