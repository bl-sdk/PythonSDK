#pragma once
#ifndef MEMORYSIGNATURE_H
#define MEMORYSIGNATURE_H

/**
 * @brief Struct holding information about a sigscan signature.
 */
struct MemorySignature {
	const uint8_t* Sig;
	const char* Mask;
	size_t Length;
};

/**
 * @brief Helper to convert strings into a sigscan signature.
 *
 * @tparam n The length of the strings (should be picked up automatically).
 * @return A sigscan signature.
 */
template <size_t n>
constexpr MemorySignature make_sig(const char (&sig)[n], const char (&mask)[n]) {
	return MemorySignature{reinterpret_cast<const uint8_t*>(sig), mask, n - 1};
}

#endif
