#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieRegister(py::object m)
{
    py::class_< UBehavior_GFxMovieRegister,  UBehaviorBase   >(m, "UBehavior_GFxMovieRegister")
        .def_readwrite("MovieDefinition", &UBehavior_GFxMovieRegister::MovieDefinition)
        .def_readwrite("MeshComponentInstanceDataName", &UBehavior_GFxMovieRegister::MeshComponentInstanceDataName)
        .def_readwrite("RegisteredDefinition", &UBehavior_GFxMovieRegister::RegisteredDefinition)
        .def("StaticClass", &UBehavior_GFxMovieRegister::StaticClass, py::return_value_policy::reference)
        .def("ResolveController", &UBehavior_GFxMovieRegister::ResolveController, py::return_value_policy::reference)
        .def("RegisterMovie", &UBehavior_GFxMovieRegister::RegisterMovie)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieRegister::ApplyBehaviorToContext)
        .def("RemoveFromroot", &UBehavior_GFxMovieRegister::RemoveFromroot)
        .def("AddToRoot", &UBehavior_GFxMovieRegister::AddToRoot)
          ;
}