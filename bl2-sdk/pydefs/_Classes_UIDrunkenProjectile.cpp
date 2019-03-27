#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDrunkenProjectile(py::module &m)
{
    py::class_< UIDrunkenProjectile,  UInterface   >(m, "UIDrunkenProjectile")
		.def_static("StaticClass", &UIDrunkenProjectile::StaticClass, py::return_value_policy::reference)
        .def("SetDrunkenRandomNumberSeed", &UIDrunkenProjectile::SetDrunkenRandomNumberSeed)
          ;
}