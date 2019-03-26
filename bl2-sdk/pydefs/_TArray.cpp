#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_TArray(py::module &m)
{
//	py::class_< TArray<UObject *> >(m, "TArray<UObject *>")
//		.def_readwrite("Count", &TArray<UObject *>::Count)
//		.def_readwrite("Max", &TArray<UObject *>::Max)
//		.def("Num", &TArray<UObject *>::Num)
//		.def("__getitem__", [](TArray<UObject *> &self, int key) { return self.Data[key]; }, py::return_value_policy::reference)
//		.def("__setitem__", [](TArray<UObject *> &self, int key, UObject *value) { self.Data[key] = value; }, py::return_value_policy::reference)
//		.def("__len__", [](TArray<UObject *> &self) { return self.Count; }, py::return_value_policy::reference)
//		;
//	py::class_< TArray<FTier> >(m, "TArray<FTier>")
//		.def_readwrite("Count", &TArray<FTier>::Count)
//		.def_readwrite("Max", &TArray<FTier>::Max)
//		.def("Num", &TArray<FTier>::Num)
//		.def("__getitem__", [](TArray<FTier> &self, int key) { return &self.Data[key]; }, py::return_value_policy::reference)
//		.def("__setitem__", [](TArray<FTier> &self, int key, FTier value) { self.Data[key] = value; }, py::return_value_policy::reference)
//		.def("__len__", [](TArray<FTier> &self) { return self.Count; }, py::return_value_policy::reference)
//		;
}