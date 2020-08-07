def wrapping_with_style(style):
    def add_wrapping(a_function):
        
        def wrapped_item():
            return 'a {} wrapped box of {}'.format(style, a_function())
        return wrapped_item
    
    return add_wrapping


@wrapping_with_style('horribly')
@wrapping_with_style('beautifully')
def gift():
    return 'a new MacBook Pro'

# same as using decorators
# gift = add_wrapping(gift)
print(gift())