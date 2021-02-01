/*!
* @brief	�t�H���g
*/

#pragma once

/// <summary>
/// �t�H���g
/// </summary>
class Font{
public:
	Font();
	~Font();
	/*!
	* @brief	�t�H���g��ݒ�B
	* @details	�f�t�H���g�t�H���g����ύX�������ꍇ��
	*  DirectX::SpriteFont���g�p���āA�t�H���g�����[�h���č����ւ����s���Ă��������B
	*/
	void SetFont(DirectX::SpriteFont* font)
	{
		m_spriteFont = font;
	}
	/*!
		* @brief	�`��J�n�B
		*/
	void Begin(RenderContext& rc);
	/*!
		* @brief	�`��I���B
		*/
	void End(RenderContext& rc);
	/*!
		* @brief	�`��B
		*@param[in]	text		�\���������e�L�X�g�B
		*@param[in]	trans		���s�ړ��B
		*@param[in]	color		�J���[�B
		*@param[in]	rot			��]�B
		*@param[in]	scale		�g��B
		*@param[in]	pivot		��_�B
		*						0.5, 0.5�ŉ摜�̒��S����_�B
		*						0.0, 0.0�ŉ摜�̍����B
		*						1.0, 1.0�ŉ摜�̉E��B
		*						Unity��uGUI�ɏ����B
		*/
	void Draw(
		wchar_t const* text,
		const Vector2& position,
		const Vector4& color,
		float rotation,
		float scale,
		Vector2 pivot
	);
	/*!
		*@brief	�e�̃p�����[�^��ݒ�B
		*@param[in]	isDrawShadow		�e��`���H
		*@param[in]	shadowOffset		�e��`���Ƃ��̃s�N�Z���̃I�t�Z�b�g�ʁB
		*@param[in]	shadowColor			�e�̐F�B
		*/
	void SetShadowParam(bool isDrawShadow, float shadowOffset, const Vector4& shadowColor)
	{
		m_isDrawShadow = isDrawShadow;
		m_shadowOffset = shadowOffset;
		m_shadowColor = shadowColor;
	}
private:
	DirectX::SpriteBatch*	m_spriteBatch = nullptr;	//�X�v���C�g�o�b�`�B
	DirectX::SpriteFont*	m_spriteFont = nullptr;		//�X�v���C�g�t�H���g�B
	bool m_isDrawShadow = false;						//�e�������H
	float m_shadowOffset = 0.0f;						//�e�������Ƃ��̃s�N�Z���̃I�t�Z�b�g�ʁB
	Vector4 m_shadowColor;								//�e�̐F�B
	Matrix m_scaleMat;
};