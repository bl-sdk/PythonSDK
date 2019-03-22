#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleInstanceData(py::module &m)
{
    py::class_< UGFxMovieDrawStyleInstanceData,  UGFxMovieDrawStyleRTT   >(m, "UGFxMovieDrawStyleInstanceData")
        .def_readwrite("ComponentIDName", &UGFxMovieDrawStyleInstanceData::ComponentIDName)
        .def_readwrite("MatIndexName", &UGFxMovieDrawStyleInstanceData::MatIndexName)
        .def_readwrite("MatiSource", &UGFxMovieDrawStyleInstanceData::MatiSource)
        .def_readwrite("TextureParameterName", &UGFxMovieDrawStyleInstanceData::TextureParameterName)
        .def_readwrite("Component", &UGFxMovieDrawStyleInstanceData::Component)
        .def_readwrite("MaterialIndex", &UGFxMovieDrawStyleInstanceData::MaterialIndex)
        .def_readwrite("Mati", &UGFxMovieDrawStyleInstanceData::Mati)
        .def("StaticClass", &UGFxMovieDrawStyleInstanceData::StaticClass, py::return_value_policy::reference)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleInstanceData::eventRequiresClientInstance)
          ;
}