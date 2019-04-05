#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_XAudio2_classes(py::module &m)
{
	py::class_< UXAudio2Device, UAudioDevice >(m, "UXAudio2Device")
		.def_static("StaticClass", &UXAudio2Device::StaticClass, py::return_value_policy::reference)
		.def_readwrite("UnknownData00[0x9C]", &UXAudio2Device::UnknownData00[0x9C])
		;

}